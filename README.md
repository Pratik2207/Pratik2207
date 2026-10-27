<h1 align="center">Hi, I'm Pratik Ramdas Sonawane 👋</h1>

<p align="center">
  <b>Gen AI Engineer · LLM Researcher</b><br>
  Building language models, tokenizers and generative models from scratch — and running the experiments to find out what actually matters
</p>

<p align="center">
  <a href="mailto:pratikrsonawane7@gmail.com"><img src="https://img.shields.io/badge/Email-D14836?style=flat&logo=gmail&logoColor=white" alt="Email"></a>
  <img src="https://img.shields.io/badge/Location-Nashik,%20India-informational?style=flat&logo=googlemaps&logoColor=white" alt="Location">
</p>

---

### 🧠 About Me

- 🔬 **Gen AI Engineer & Researcher**, focused on the inner workings of LLMs.
- 🏗️ Most recently I **trained a GPT-style transformer from scratch** and ran **47 controlled ablation runs** to measure what each part of the architecture really contributes.
- 🧩 I've built from-scratch **BPE tokenizers**, **diffusion models**, and a fully local **RAG agent** for Indian criminal law.
- 📚 I read papers and turn them into working, reproducible code, with a written report for every project.

---

### 📌 Pinned Projects

| Project | Description | Tech |
|---------|-------------|------|
| 🧪 [**LLM from Scratch: Ablation Study**](https://github.com/Pratik2207/llm-from-scratch-ablation-study) · *latest* | A GPT-2-style decoder (28.95M params) trained from scratch. 47 runs measure the effect of epochs, learning rate, depth, attention heads and LayerNorm / residual / FFN ablations. Includes a full report and a Colab notebook. | `PyTorch` `Transformers` `Colab` |
| ⚖️ [**Indian Criminal Law RAG Agent**](https://github.com/Pratik2207/indian-criminal-law-rag-agent) | A fully local, open-source RAG assistant for IPC, CrPC, BNS and BNSS. A multi-agent CrewAI pipeline gives grounded answers with citations. | `CrewAI` `Qdrant` `Ollama` `Streamlit` |
| 🔤 [**BPE Tokenization & Compression Analysis**](https://github.com/Pratik2207/-Tokenization-and-Byte-Pair-Encoding) | A from-scratch Byte Pair Encoding tokenizer with a compression-ratio study in English, German, Spanish and French, benchmarked against GPT-2/3.5/4. | `Python` `tiktoken` `NLP` |
| 🌀 [**Yi Syllable Diffusion**](https://github.com/Pratik2207/yi-syllable-diffusion) | An unconditional DDPM that generates Yi-script syllables. It uses a U-Net with v-prediction and zero-SNR, and ships with a research report and a pretrained model. | `PyTorch` `Diffusion` `U-Net` |

---

### 💡 What I Learned Recently: Training an LLM from Scratch

From my [ablation study](https://github.com/Pratik2207/llm-from-scratch-ablation-study) (47 runs, ≈4.2 T4 GPU-hours):

- **Data sets the limit, not architecture.** On a single-book corpus, every configuration overfits within 10–30 epochs. The best transformer (val. loss 4.61) beats a simple bigram counting model (4.94) by only 0.33 nats.
- **Residual connections are essential.** Without them, a 4- or 12-layer model never gets past the loss of a unigram word-frequency model (6.33), and its gradient norm decays.
- **LayerNorm isn't always needed.** At this scale, removing it *improved* the best validation loss by ~0.2. Gradient clipping supplied the stability that normalization usually provides.
- **Depth and the FFN barely mattered here.** 1 to 12 layers changed the best loss by under 0.03. Fewer, wider attention heads were slightly but consistently better.
- **Evaluation protocol can flip conclusions.** A fixed-epoch, single-seed comparison gave misleading ablation results. Comparing each model at its own best epoch, over several seeds, corrected them.

---

### 🗂️ More Projects

- 🛡️ [**aion-redteam**](https://github.com/Pratik2207/aion-redteam): an OWASP-aligned adversarial red-team harness for LangGraph agents.
- 📊 [**TabuQuest**](https://github.com/Pratik2207/TabuQuest): natural-language question answering over tabular datasets with LLMs.
- 🤖 [**AI Agents**](https://github.com/Pratik2207/Ai-agents): hands-on CrewAI, LangGraph, LlamaIndex and Smolagents projects.

---

### 🛠️ Tech Stack

![Python](https://img.shields.io/badge/Python-3776AB?style=flat&logo=python&logoColor=white)
![PyTorch](https://img.shields.io/badge/PyTorch-EE4C2C?style=flat&logo=pytorch&logoColor=white)
![NumPy](https://img.shields.io/badge/NumPy-013243?style=flat&logo=numpy&logoColor=white)
![Pandas](https://img.shields.io/badge/Pandas-150458?style=flat&logo=pandas&logoColor=white)
![Matplotlib](https://img.shields.io/badge/Matplotlib-11557C?style=flat&logo=python&logoColor=white)
![Jupyter](https://img.shields.io/badge/Jupyter-F37626?style=flat&logo=jupyter&logoColor=white)
![Google Colab](https://img.shields.io/badge/Colab-F9AB00?style=flat&logo=googlecolab&logoColor=white)
![LangGraph](https://img.shields.io/badge/LangGraph-1C3C3C?style=flat&logo=langchain&logoColor=white)
![Ollama](https://img.shields.io/badge/Ollama-000000?style=flat&logo=ollama&logoColor=white)
![LaTeX](https://img.shields.io/badge/LaTeX-008080?style=flat&logo=latex&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=cplusplus&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=flat&logo=git&logoColor=white)

**Focus areas:** Transformer training dynamics & ablations · LLM tokenization · Generative models (diffusion) · Agentic AI & RAG

---

### 📈 GitHub Stats

<p align="center">
  <img height="165" src="https://github-readme-stats.vercel.app/api?username=Pratik2207&show_icons=true&theme=tokyonight&hide_border=true&count_private=true" alt="GitHub stats">
  <img height="165" src="https://github-readme-stats.vercel.app/api/top-langs/?username=Pratik2207&layout=compact&theme=tokyonight&hide_border=true&langs_count=8" alt="Top languages">
</p>

---

### 📫 Reach Me

- 📧 **Email:** pratikrsonawane7@gmail.com
- 💼 Open to collaboration on **LLM research, training experiments, tokenization and generative AI** projects.

<p align="center"><i>Building AI from first principles, one ablation at a time.</i></p>
