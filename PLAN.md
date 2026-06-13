# 🗺️ Plano de Implantação e Governança - PortfolioHUB

Este documento constitui o Plano de Implantação detalhado da plataforma PortfolioHUB, desenvolvido sob a mentoria e orientação da Inteligência Artificial Google GEMINI, como requisito para a entrega final da disciplina de Bootcamp de Engenharia de Software.

## 1. Planejamento da Implantação
* **Objetivo Geral:** Migrar o portfólio profissional e o hub de projetos do ecossistema do Google Sites para um ambiente de produção real, open-source, versionado e auditável.
* **Uso da IA Generativa:** Toda a trilha de arquitetura, configuração de segurança e testes de implantação foi guiada por interações dinâmicas com o Google GEMINI, atuando como copiloto de engenharia.

## 2. Configuração Inicial e Integração com GitHub
* **Ambiente Dedicado:** Criação do repositório público `breno-zanon608/portfolioHUB` para hospedar de forma centralizada os artefatos digitais.
* **Lançamento em Produção:** Implantação automatizada (Deploy) do portfólio via GitHub Pages, disponibilizando publicamente o site com suporte nativo a protocolo seguro HTTPS.

## 3. Gestão de Usuários, Governança e Segurança
Com foco nas melhores práticas de engenharia e robustez de código, foram implementadas as seguintes políticas de segurança e proteção de dados:
* **Proteção de Branch (Branch Protection Rule):** Configuração de regra clássica para a branch `main`. Commits diretos foram bloqueados, tornando obrigatória a abertura e revisão de um *Pull Request* antes de qualquer mesclagem de código.
* **Análise Automatizada de Dependências (Dependabot):** Ativação do *Dependency Graph* e dos alertas do *Dependabot* para monitoramento contínuo de vulnerabilidades e aplicação automática de patches de segurança.
* **Varredura Preventiva (Secret Scanning & Push Protection):** Implementação de ferramentas nativas para bloquear commits e escanear o repositório, impedindo o vazamento acidental de credenciais, chaves privadas ou tokens.
* **Scanner Dinâmico de Código (CodeQL Analysis):** Ativação da ferramenta *CodeQL* integrada ao fluxo de CI/CD para detectar falhas lógicas e vulnerabilidades estruturais no código a cada modificação.

## 4. Compartilhamento, Controle de Acesso e Colaboração
* **Código Aberto:** O ecossistema foi configurado como repositório público, permitindo a transparência do código para recrutadores e avaliadores.
* **Controle de Versão:** Adoção de ramificações (*branches*) de recursos e histórico de commits frequentes e semânticos para permitir colaborações externas organizadas.

---
🎓 **Estudante:** Breno Zanon de Sousa  
🆔 **RA:** 22602866  
🤖 **Mentor de Implantação:** Google GEMINI for Google Workspace
